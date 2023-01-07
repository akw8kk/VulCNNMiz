void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR2[100*2];
        wmemset(VAR2, VAR3'', 100*2-1); 
        VAR2[100*2-1] = VAR3''; 
        
        wcscpy(VAR2, VAR1);
        FUN3(VAR2);
        
    }
}