void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (char *)malloc(50*sizeof(char));
        VAR1[0] = ''; 
        break;
    }
    {
        char VAR2[100];
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        
        strcat(VAR1, VAR2);
        FUN2(VAR1);
        free(VAR1);
    }
}