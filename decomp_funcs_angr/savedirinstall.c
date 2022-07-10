int savedir()
{
    unsigned long long v3;  // rax

    opendir_safer();
    if (!(&stack_base+0 != 0))
    {
        return 0;
    }
    else if (closedir() == 0)
    {
        v3 = (long long)streamsavedir();
        return v3;
    }
    else
    {
        rpl_free();
        return 0;
    }
}
