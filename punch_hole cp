int punch_hole()
{
    unsigned int v1;  // eax
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12

    v3 = fallocate();
    if (v1 >= 0)
    {
        v2 = v3;
        return v2;
    }
    v1 = ((int)*(__errno_location()));
    if (!(v1 != 38))
    {
        return 0;
    }
    else if (v1 != 95)
    {
        v2 = v3;
        return v2;
    }
    else
    {
        return 0;
    }
}
