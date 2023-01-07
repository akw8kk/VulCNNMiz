void FUN1()
{
    int VAR1;
    char * VAR2;
    VAR2 = (char *)malloc(100*sizeof(char));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
    }
    {
        char VAR3[50] = "";
        
        FUN2(VAR3, strlen(VAR2), "", VAR2);
        FUN3(VAR2);
        free(VAR2);
    }
}