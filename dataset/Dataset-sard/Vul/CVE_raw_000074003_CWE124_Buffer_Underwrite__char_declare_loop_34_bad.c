void FUN1()
{
    char * VAR1;
    CWE124_Buffer_Underwrite__char_declare_loop_34_unionType VAR2;
    char VAR3[100];
    memset(VAR3, '', 100-1);
    VAR3[100-1] = '';
    
    VAR1 = VAR3 - 8;
    VAR2.VAR4 = VAR1;
    {
        char * VAR1 = VAR2.VAR5;
        {
            size_t VAR6;
            char VAR7[100];
            memset(VAR7, '', 100-1); 
            VAR7[100-1] = ''; 
            
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR1[VAR6] = VAR7[VAR6];
            }
            
            VAR1[100-1] = '';
            FUN2(VAR1);
        }
    }
}