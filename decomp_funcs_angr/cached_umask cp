extern struct_0 mask.8248;

int cached_umask()
{
    if (mask.8248 != -1)
    {
        return ((long long)mask.8248);
    }
    mask.8248 = (int)umask(0x0);
    umask(((int)mask.8248));
    return ((long long)mask.8248);
}
