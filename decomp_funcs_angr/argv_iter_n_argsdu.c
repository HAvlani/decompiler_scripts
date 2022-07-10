int argv_iter_n_args()
{
    unsigned long long v1[6];  // rdi

    if (v1[0] != 0)
    {
        return v1[1];
    }
    return v1[5] - v1[4] >> 3;
}
