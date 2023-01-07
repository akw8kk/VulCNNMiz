void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    if(VAR4)
    {
        
        VAR1 = VAR2;
        VAR1[0] = VAR5''; 
    }
    {
        wchar_t VAR6[100];
        wmemset(VAR6, VAR5'', 100-1); 
        VAR6[100-1] = VAR5''; 
        
        wcsncat(VAR1, VAR6, 100);
        FUN3(VAR1);
    }
}