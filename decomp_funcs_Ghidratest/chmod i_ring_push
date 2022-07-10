
int i_ring_push(I_ring *ir,int val)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(ir->ir_empty ^ 1);
  uVar3 = ir->ir_front + uVar2 & 3;
  iVar1 = ir->ir_data[uVar3];
  ir->ir_data[uVar3] = val;
  ir->ir_front = uVar3;
  if (ir->ir_back == uVar3) {
    ir->ir_back = uVar2 + ir->ir_back & 3;
  }
  ir->ir_empty = false;
  return iVar1;
}

