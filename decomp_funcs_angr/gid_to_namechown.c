int gid_to_name()
{
    unsigned long long v1;  // rax

    if (getgrgid() != 0)
    {
        v1 = xstrdup();
        return v1;
    }
    umaxtostr();
    v1 = xstrdup();
    return v1;
}
