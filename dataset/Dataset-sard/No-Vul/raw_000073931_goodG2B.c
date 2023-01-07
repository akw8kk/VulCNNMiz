static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    
    VAR1 = VAR2;
    FUN3(&VAR1);
}