
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Bool check_tuning(Hash_table *table)

{
  float fVar1;
  Hash_tuning *pHVar2;
  float fVar3;
  
  pHVar2 = (Hash_tuning *)table->bucket;
  if (pHVar2 == &default_tuning) {
    return true;
  }
  fVar1 = pHVar2->growth_threshold;
  if ((((_DAT_00109754 < fVar1) && (fVar1 < DAT_00109758)) &&
      (_DAT_0010975c < pHVar2->growth_factor)) && (_DAT_00109760 <= pHVar2->shrink_threshold)) {
    fVar3 = pHVar2->shrink_threshold + _DAT_00109754;
    if (((fVar3 < pHVar2->shrink_factor) && (pHVar2->shrink_factor <= DAT_00109764)) &&
       (fVar3 < fVar1)) {
      return true;
    }
  }
  table->bucket = (hash_entry *)&default_tuning;
  return false;
}
