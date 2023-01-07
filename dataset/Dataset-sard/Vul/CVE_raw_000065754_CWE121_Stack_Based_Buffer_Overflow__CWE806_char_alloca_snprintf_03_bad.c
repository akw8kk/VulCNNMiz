void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR2;
    if(5==5)
    {
        
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
    }
    {
        char VAR3[50] = "";
        
        FUN3(VAR3, strlen(VAR1), "", VAR1);
        FUN4(VAR1);
    }
}