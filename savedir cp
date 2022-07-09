int savedir()
{
    unsigned long long v1;  // rax

    opendir_safer();
    if (!(&stack_base+0 != 0))
    {
        return 0;
    }
    else if (closedir() == 0)
    {
        v1 = (long long)streamsavedir();
        return v1;
    }
    else
    {
        rpl_free();
        return 0;
    }
}
