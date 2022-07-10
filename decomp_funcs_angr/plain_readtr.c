int plain_read()
{
    unsigned long long v1;  // rax

    v1 = safe_read();
    if (v1 != 18446744069414584319)
    {
        return v1;
    }
    plain_read.part.0(); /* do not return */
}
