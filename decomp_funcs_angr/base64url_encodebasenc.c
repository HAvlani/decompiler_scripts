int base64url_encode()
{
    unsigned long long v1;  // rax
    unsigned long|unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    char * v4;  // rbx

    v4 = v3;
    v1 = base64_encode();
    if (v2 != 0)
    {
        v2 = v3 + v2;
        while (true)
        {
            v1 = ((long long)*(v4));
            if (*(v4) != 43)
            {
                if (v1 == 47)
                {
                    *(v4) = 95;
                }
                v4 += 1;
                return v1;
            }
            *(v4) = 45;
            v4 += 1;
            return v1;
        }
    }
    return v1;
}
