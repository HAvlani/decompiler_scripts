extern char in_delete_set;

int read_and_delete()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdi

    v4 = v6;
    while (true)
    {
        v2 = safe_read();
        if (v2 != 18446744069414584319)
        {
            if (v2 == 0)
            {
                break;
            }
            if (v2 != 0)
            {
                v5 = 0;
                while (true)
                {
                    v3 = v5 + 1;
                    if (v2 != v3)
                    {
                        v5 = v3;
                    }
                    else
                    {
                        v3 = v5 + 2;
                        if (v5 + 2 >= v2)
                        {
                            return v2;
                        }
                        v5 = v2;
                        break;
                    }
                }
                do
                {
                    v6 = ((long long)*(v4 + v3));
                    if (*(in_delete_set + ((long long)*(v4 + v3))) == 0)
                    {
                        *(v4 + v5) = v6;
                        v5 += 1;
                    }
                    v3 += 1;
                }
                while (v2 > v3);
                v2 = v5;
            }
            else
            {
                return v2;
            }
        }
        else
        {
            plain_read.part.0(); /* do not return */
        }
    }
    return v2;
}
