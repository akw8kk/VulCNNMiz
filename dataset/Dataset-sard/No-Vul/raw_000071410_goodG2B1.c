static void FUN1()
{
    char * VAR1;
    VAR1 = NULL;
    if(5!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (char *)malloc(100*sizeof(char));
        VAR1[0] = ''; 
    }
    {
        char VAR2[100];
        memset(VAR2, '', 100-1); 
        VAR2[100-1] = ''; 
        
        strncpy(VAR1, VAR2, 100-1);
        VAR1[100-1] = ''; 
        FUN2(VAR1);
        free(VAR1);
    }
}