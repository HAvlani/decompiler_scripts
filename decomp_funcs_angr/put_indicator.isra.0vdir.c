extern char used_color;

int put_indicator.isra.0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v5;  // rbx

    v0 = v5;
    if (used_color != 0)
    {
    }
    else
    {
        used_color = 1;
        if (tcgetpgrp(0x1) < 0)
        {
            prep_non_filename_text();
        }
        else
        {
            signal_setup();
            prep_non_filename_text();
        }
    }
}
