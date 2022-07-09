
reg_errcode_t optimize_subexps(void *extra,bin_tree_t *node)

{
  char cVar1;
  bin_tree_t *pbVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  
  cVar1 = (node->token).field_0x8;
  if (cVar1 == '\x04') {
    if (*(long *)((long)extra + 0xe0) != 0) {
      uVar4 = *(undefined8 *)(*(long *)((long)extra + 0xe0) + (long)*(int *)&(node->token).opr * 8);
      (node->token).opr = uVar4;
      *(ulong *)((long)extra + 0xa0) =
           *(ulong *)((long)extra + 0xa0) | (long)(1 << ((byte)uVar4 & 0x1f));
      return _REG_NOERROR;
    }
  }
  else if (((cVar1 == '\x11') && (pbVar2 = node->left, pbVar2 != (bin_tree_t *)0x0)) &&
          ((pbVar2->token).field_0x8 == '\x11')) {
    lVar3 = (pbVar2->token).opr;
    pbVar2 = pbVar2->left;
    node->left = pbVar2;
    if (pbVar2 != (bin_tree_t *)0x0) {
      pbVar2->parent = node;
    }
    *(undefined8 *)(*(long *)((long)extra + 0xe0) + lVar3 * 8) =
         *(undefined8 *)(*(long *)((long)extra + 0xe0) + (node->token).opr * 8);
    if (lVar3 < 0x40) {
      bVar5 = (byte)lVar3 & 0x3f;
      *(ulong *)((long)extra + 0xa0) =
           *(ulong *)((long)extra + 0xa0) & (-2 << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
    }
  }
  return _REG_NOERROR;
}

