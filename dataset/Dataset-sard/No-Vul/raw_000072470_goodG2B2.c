static void FUN1()
{
    char * VAR1;
    VAR1 = (char *)malloc(100*sizeof(char));
    if(VAR2==5)
    {
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    {
        char VAR3[50] = "";
        
        FUN2(VAR3, strlen(VAR1), "", VAR1);
        FUN3(VAR1);
        free(VAR1);
    }
}