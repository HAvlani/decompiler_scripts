int num_processors_via_affinity_mask()
{
    char v0;  // [bp-0x98]
    unsigned long long v2;  // rax

    v2 = sched_getaffinity(0x0, 0x80, ((int)&v0));
    if (v2 != 0)
    {
        v2 = 0;
        return v2;
    }
    v2 = __sched_cpucount(0x80, ((int)&v0));
    if (v2 == 0)
    {
        v2 = 0;
        return v2;
    }
    else
    {
        return v2;
    }
}
