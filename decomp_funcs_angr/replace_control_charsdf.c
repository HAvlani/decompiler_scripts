int replace_control_chars()
{
    unsigned long long v1;  // rax
    char * v2;  // rdi

    while (true)
    {
        v1 = ((long long)*(rdi<8>));
        if (((long long)*(rdi<8>)) == 0)
        {
            break;
        }
        if (((char)(((long long)v1) <= 31)) && !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x11<64>, Conv(8->64, al<1>), 0x0<64>, cc_ndep<8>))) || v1 == 127 && !(((char)(((long long)v1) <= 31))))
        {
            *(v2) = 63;
        }
        v2 += 1;
    }
    return v1;
}
