void FUN1()
{
    VAR1 * VAR2;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_67_structType VAR3;
    VAR1 * VAR4 = (VAR1 *)FUN2(50*sizeof(VAR1));
    VAR1 * VAR5 = (VAR1 *)FUN2(100*sizeof(VAR1));
    
    VAR2 = VAR4;
    VAR3.VAR6 = VAR2;
    FUN3(VAR3);
}