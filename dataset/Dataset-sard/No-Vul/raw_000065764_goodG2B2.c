static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR2;
    if(VAR3==5)
    {
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    {
        char VAR4[50] = "";
        
        FUN3(VAR4, strlen(VAR1), "", VAR1);
        FUN4(VAR1);
    }
}