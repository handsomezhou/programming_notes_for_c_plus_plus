#ifndef STRING_H
#define STRING_H

class string{
public:
	//string
	string();
	string (const string& str);
	string (const string& str, int pos, int len);	
	string (const char* s);	
	string (const char* s, int n);
	string (int n, char c);
	//~string
	~string();
	//operator=
	string& operator= (const string& str);
	string& operator= (const char* s);
	string& operator= (char c);
	//operator[]
	char& operator[] (int pos);
	const char& operator[] (int pos) const;
	//operator+=
	string& operator+= (const string& str);
	string& operator+= (const char* s);
	string& operator+= (char c);

	//operator+
	friend string operator+ (const string& lhs, const string& rhs);
	friend string operator+ (string&&      lhs, string&&      rhs);
	friend string operator+ (string&&      lhs, const string& rhs);
	friend string operator+ (const string& lhs, string&&      rhs);

	friend string operator+ (const string& lhs, const char*   rhs);
	friend string operator+ (string&&      lhs, const char*   rhs);
	friend string operator+ (const char*   lhs, const string& rhs);
	friend string operator+ (const char*   lhs, string&&      rhs);
		
	friend string operator+ (const string& lhs, char          rhs);
	friend string operator+ (string&&      lhs, char          rhs);
	friend string operator+ (char          lhs, const string& rhs);
	friend string operator+ (char          lhs, string&&      rhs);

	//relational operators

	friend bool operator== (const string& lhs, const string& rhs);// noexcept;
	friend bool operator== (const char*   lhs, const string& rhs);
	friend bool operator== (const string& lhs, const char*   rhs);

	friend bool operator!= (const string& lhs, const string& rhs);//noexcept;
	friend bool operator!= (const char*   lhs, const string& rhs);
	friend bool operator!= (const string& lhs, const char*   rhs);
		
	friend bool operator<  (const string& lhs, const string& rhs);// noexcept;
	friend bool operator<  (const char*   lhs, const string& rhs);
	friend bool operator<  (const string& lhs, const char*   rhs);

	friend bool operator<= (const string& lhs, const string& rhs);// noexcept;
	friend bool operator<= (const char*   lhs, const string& rhs);
	friend bool operator<= (const string& lhs, const char*   rhs);

	friend bool operator>  (const string& lhs, const string& rhs);// noexcept;
	friend bool operator>  (const char*   lhs, const string& rhs);
	friend bool operator>  (const string& lhs, const char*   rhs);

	friend bool operator>= (const string& lhs, const string& rhs);// noexcept;
	friend bool operator>= (const char*   lhs, const string& rhs);
	friend bool operator>= (const string& lhs, const char*   rhs);

	//swap
	friend void swap (string& x, string& y);
	
	//operator>>
	friend istream& operator>> (istream& is, string& str);
	//operator<< 
	friend ostream& operator<< (ostream& os, const string& str);
private:
	char *m_data;
	int m_data_len;
};

#endif/*STRING_H*/