void FUN1()
{
    VAR1 * VAR2;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_34_unionType VAR3;
    int64_t VAR4[50];
    int64_t VAR5[100];
    
    VAR2 = VAR4;
    VAR3.VAR6 = VAR2;
    {
        VAR1 * VAR2 = VAR3.VAR7;
        {
            int64_t VAR8[100] = {0}; 
            {
                size_t VAR9;
                
                for (VAR9 = 0; VAR9 < 100; VAR9++)
                {
                    VAR2[VAR9] = VAR8[VAR9];
                }
                FUN2(VAR2[0]);
            }
        }
    }
}