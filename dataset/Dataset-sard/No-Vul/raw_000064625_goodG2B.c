static void FUN1()
{
    int * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_67_structType VAR2;
    int * VAR3 = (int *)FUN2(50*sizeof(int));
    int * VAR4 = (int *)FUN2(100*sizeof(int));
    
    VAR1 = VAR4;
    VAR2.VAR5 = VAR1;
    FUN3(VAR2);
}