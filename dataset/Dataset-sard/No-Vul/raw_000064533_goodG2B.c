static void FUN1()
{
    VAR1 * VAR2;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_34_unionType VAR3;
    int64_t VAR4[50];
    int64_t VAR5[100];
    
    VAR2 = VAR5;
    VAR3.VAR6 = VAR2;
    {
        VAR1 * VAR2 = VAR3.VAR7;
        {
            int64_t VAR8[100] = {0}; 
            
            memmove(VAR2, VAR8, 100*sizeof(VAR1));
            FUN2(VAR2[0]);
        }
    }
}