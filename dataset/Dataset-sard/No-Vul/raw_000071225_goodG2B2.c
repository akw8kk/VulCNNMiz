static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(VAR2)
    {
        
        VAR1 = (char *)malloc(100*sizeof(char));
        VAR1[0] = ''; 
    }
    {
        size_t VAR3;
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        for (VAR3 = 0; VAR3 < 100; VAR3++)
        {
            VAR1[VAR3] = VAR4[VAR3];
        }
        VAR1[100-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}