 string s = " the sky is blue ";
    string temp = "", ans = "";
    for (int i = 0; i <= s.length(); i++)
    {
        if (isalnum(s[i]) == 1)
        {
            temp += s[i];
            cout << temp << endl;
            cout << "==========" << endl;
        }
        else if (isalnum(s[i]) == 0)
        {
            if (ans == "")
            {
                ans = temp;
                temp = "";
            }
            else
            {
                ans = temp + " " + ans;
                temp = "";
            }
        }
    }
    cout << ans;