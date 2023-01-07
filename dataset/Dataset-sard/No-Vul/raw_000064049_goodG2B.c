static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(50*sizeof(char));
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    goto VAR4;
VAR4:
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        FUN3(VAR1, 100, "", VAR4);
        FUN4(VAR1);
    }
}