int qcopy_acl()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12

    if (get_permissions() == 0)
    {
        v3 = (long long)set_permissions();
        free_permission_context();
        v2 = v3;
        return v2;
    }
    v3 = -2;
    v2 = v3;
    return v2;
}
