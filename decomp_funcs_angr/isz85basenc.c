int isz85()
{
    unsigned long long v1;  // rax
    char v2;  // al
    char|unsigned long v3;  // dil

    if (((char)(((long long)v3) <= 90)))
    {
        if (!(((char)(((long long)v3) <= 64))))
        {
            return 1;
        }
        else if ((v3 - 48 & 255) > 9)
        {
            v1 = strchr(".-:+=^!/*?&<>()[]{}@%$#", ((int)v3));
            v2 = ((char)(v1 != 0));
            return rax<8>;
        }
        else
        {
            return 1;
        }
    }
    if ((v3 - 97 & 255) > 25)
    {
        v1 = strchr(".-:+=^!/*?&<>()[]{}@%$#", ((int)v3));
        v2 = ((char)(v1 != 0));
        return rax<8>;
    }
    else
    {
        return 1;
    }
}
