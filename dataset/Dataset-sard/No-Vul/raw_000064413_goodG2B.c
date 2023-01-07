static void FUN1()
{
    VAR1 * VAR2;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memmove_34_unionType VAR3;
    VAR1 * VAR4 = (VAR1 *)FUN2(50*sizeof(VAR1));
    VAR1 * VAR5 = (VAR1 *)FUN2(100*sizeof(VAR1));
    
    VAR2 = VAR5;
    VAR3.VAR6 = VAR2;
    {
        VAR1 * VAR2 = VAR3.VAR7;
        {
            int64_t VAR8[100] = {0}; 
            
            memmove(VAR2, VAR8, 100*sizeof(VAR1));
            FUN3(VAR2[0]);
        }
    }
}