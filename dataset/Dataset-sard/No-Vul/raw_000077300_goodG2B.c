static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    
    VAR1 = VAR2;
    {
        char * VAR3 = VAR1;
        char * VAR1 = VAR3;
        {
            size_t VAR4;
            char VAR5[100];
            memset(VAR5, '', 100-1); 
            VAR5[100-1] = ''; 
            
            for (VAR4 = 0; VAR4 < 100; VAR4++)
            {
                VAR5[VAR4] = VAR1[VAR4];
            }
            
            VAR5[100-1] = '';
            FUN3(VAR5);
        }
    }
}