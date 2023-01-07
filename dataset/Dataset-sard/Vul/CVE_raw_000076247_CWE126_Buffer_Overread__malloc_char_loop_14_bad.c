void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(VAR2==5)
    {
        
        VAR1 = (char *)malloc(50*sizeof(char));
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    {
        size_t VAR3, VAR4;
        char VAR5[100];
        memset(VAR5, '', 100-1);
        VAR5[100-1] = ''; 
        VAR4 = strlen(VAR5);
        
        for (VAR3 = 0; VAR3 < VAR4; VAR3++)
        {
            VAR5[VAR3] = VAR1[VAR3];
        }
        VAR5[100-1] = '';
        FUN2(VAR5);
        free(VAR1);
    }
}