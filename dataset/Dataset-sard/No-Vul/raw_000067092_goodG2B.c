static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR2;
    
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    VAR3 = VAR1;
    FUN3();
}