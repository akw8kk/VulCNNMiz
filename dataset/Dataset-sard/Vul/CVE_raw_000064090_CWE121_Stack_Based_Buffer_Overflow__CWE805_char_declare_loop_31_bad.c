void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    
    VAR1 = VAR2;
    VAR1[0] = ''; 
    {
        char * VAR4 = VAR1;
        char * VAR1 = VAR4;
        {
            size_t VAR5;
            char VAR6[100];
            memset(VAR6, '', 100-1); 
            VAR6[100-1] = ''; 
            
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR1[VAR5] = VAR6[VAR5];
            }
            VAR1[100-1] = ''; 
            FUN2(VAR1);
        }
    }
}