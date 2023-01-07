void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(5==5)
    {
        
        VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        VAR1[0] = VAR2''; 
    }
    {
        wchar_t VAR3[100];
        wmemset(VAR3, VAR2'', 100-1); 
        VAR3[100-1] = VAR2''; 
        
        FUN2(VAR1, 100, VAR2"", VAR3);
        FUN3(VAR1);
        free(VAR1);
    }
}