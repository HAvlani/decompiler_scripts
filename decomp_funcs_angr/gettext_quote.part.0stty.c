extern <missing-type> g_40f892;
extern <missing-type> g_40f89a;
extern <missing-type> g_40f8a1;

int gettext_quote.part.0()
{
    char v1[8];  // rax
    unsigned long long v2;  // rdx
    unsigned int v3;  // esi
    char *v5;  // rdi

    v1 = locale_charset();
    v2 = ((long long)(((int)v1[0]) & -33));
    if (((char)(((int)v1[0]) & -33)) == 85)
    {
        if (!(((char)(((int)v1[1]) & -33)) == 84))
        {
            return (v3 != 9? &g_40f8a1 : "\"");
        }
        else if (!(((char)(((int)v1[2]) & -33)) == 70))
        {
            return (v3 != 9? &g_40f8a1 : "\"");
        }
        else if (!(v1[3] == 45))
        {
            return (v3 != 9? &g_40f8a1 : "\"");
        }
        else if (!(v1[4] == 56))
        {
            return (v3 != 9? &g_40f8a1 : "\"");
        }
        else if (v1[5] == 0)
        {
            return (*(v5) != 96? &g_40f892 : 4257949);
        }
        else
        {
            return (v3 != 9? &g_40f8a1 : "\"");
        }
    }
    if (!(v2 == 71))
    {
        return (v3 != 9? &g_40f8a1 : "\"");
    }
    else if (!(((char)(((int)v1[1]) & -33)) == 66))
    {
        return (v3 != 9? &g_40f8a1 : "\"");
    }
    else if (!(v1[2] == 49))
    {
        return (v3 != 9? &g_40f8a1 : "\"");
    }
    else if (v1[3] != 56)
    {
        return (v3 != 9? &g_40f8a1 : "\"");
    }
    else if (v1[4] != 48)
    {
        return (v3 != 9? &g_40f8a1 : "\"");
    }
    else if (v1[5] != 51)
    {
        return (v3 != 9? &g_40f8a1 : "\"");
    }
    else if (v1[6] != 48)
    {
        return (v3 != 9? &g_40f8a1 : "\"");
    }
    else if (v1[7] != 0)
    {
        return (v3 != 9? &g_40f8a1 : "\"");
    }
    else
    {
        return (*(v5) != 96? &g_40f89a : 4257942);
    }
}