int qset_acl()
{
    unsigned int v0;  // [bp-0x24]
    unsigned long long v2;  // rax
    unsigned int v4;  // edx

    v0 = v4;
    free_permission_context();
    v2 = (long long)set_permissions();
    return v2;
}
