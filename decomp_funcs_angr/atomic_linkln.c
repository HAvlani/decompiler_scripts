extern char beware_hard_dir_link;
extern char relative;
extern char symbolic_link;

int atomic_link()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (symbolic_link != 0)
    {
        if (relative == 0)
        {
            v1 = symlinkat();
            if (v1 >= 0)
            {
                v3 = 0;
                return v3;
            }
            v2 = ((long long)*(__errno_location()));
            return v2;
        }
        v3 = -1;
        return v3;
    }
    if (beware_hard_dir_link == 0)
    {
        v1 = linkat();
        if (v1 >= 0)
        {
            v3 = 0;
            return v3;
        }
        else
        {
            v2 = ((long long)*(__errno_location()));
            return v2;
        }
    }
    else
    {
        v3 = -1;
        return v3;
    }
}
