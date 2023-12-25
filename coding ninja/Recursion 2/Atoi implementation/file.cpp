int createAtoi(string s) {
    // Write your code here.
    vector<char> e;
	for(int i=0;i<s.size();)
	{
		while(s[i]==' ')
			i++;
		if(s[i]=='-' or s[i]=='+')
		{
			e.push_back(s[i]);
			i++;
		}
		while(s[i]>='0' and s[i]<='9')
		{
			e.push_back(s[i]);
			i++;
		}
		break;
	}

	bool positive = true;
    int size = e.size();
    bool sign = false;
	int res = 0;

	for(int i=0;i<e.size();)
	{
		if(e[i]=='+' or e[i]=='-')
		{
            sign = true;
            size--;
			if(e[i]=='-')
				positive = false;
			i++;
		}

        if(size>=10)
        {
            if(sign and !positive)
            {
                return -2147483648;
            }
            
            return 2147483647;
        }

		while(e[i]=='0')
			i++;

		while(i<e.size())
		{
			res = res*10 + (e[i] - '0');
			i++;
		}
	}

	if(!positive)
	{
		res = -res;
	}

    return res;
}