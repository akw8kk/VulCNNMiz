void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_loop_34_unionType VAR2;
    char VAR3[50];
    char VAR4[100];
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    VAR2.VAR5 = VAR1;
    {
        char * VAR1 = VAR2.VAR6;
        {
            size_t VAR7;
            char VAR8[100];
            memset(VAR8, '', 100-1); 
            VAR8[100-1] = ''; 
            
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR1[VAR7] = VAR8[VAR7];
            }
            VAR1[100-1] = ''; 
            FUN2(VAR1);
        }
    }
}