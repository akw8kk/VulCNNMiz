void FUN1()
{
    int VAR1;
    char * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (char *)malloc(50*sizeof(char));
        VAR2[0] = ''; 
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        strncat(VAR2, VAR3, 100);
        FUN2(VAR2);
        free(VAR2);
    }
}