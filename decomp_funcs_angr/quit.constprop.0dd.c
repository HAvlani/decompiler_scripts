int quit.constprop.0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v5;  // rax

    v0 = v5;
    process_signals();
    cleanup();
    print_stats();
    exit(0x1); /* do not return */
}
