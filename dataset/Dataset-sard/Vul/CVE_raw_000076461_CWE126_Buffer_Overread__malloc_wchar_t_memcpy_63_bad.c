void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
    wmemset(VAR1, VAR2'', 50-1); 
    VAR1[50-1] = VAR2''; 
    FUN2(&VAR1);
}