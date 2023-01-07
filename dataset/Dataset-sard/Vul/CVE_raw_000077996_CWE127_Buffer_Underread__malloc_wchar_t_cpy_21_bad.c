void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR3[100*2];
        wmemset(VAR3, VAR4'', 100*2-1); 
        VAR3[100*2-1] = VAR4''; 
        
        wcscpy(VAR3, VAR1);
        FUN3(VAR3);
        
    }
}