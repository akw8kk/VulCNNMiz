static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(VAR2==5)
    {
        {
            char * VAR3 = (char *)malloc(100*sizeof(char));
            memset(VAR3, '', 100-1);
            VAR3[100-1] = '';
            
            VAR1 = VAR3;
        }
    }
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
        FUN2(VAR5);
        
    }
}