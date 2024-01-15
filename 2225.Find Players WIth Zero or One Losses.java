class Solution {
    public List<List<Integer>> findWinners(int[][] matches) {
        HashMap<Integer,Integer> a=new HashMap<>();
        HashMap<Integer,Integer> b=new HashMap<>();
        List<List<Integer>> al=new ArrayList<>();
        ArrayList<Integer> am=new ArrayList<>();
        ArrayList<Integer> bm= new ArrayList<>();
        for(int i=0;i<matches.length;i++)
        {
            a.put(matches[i][0],a.getOrDefault(matches[i][0],0)+1);
            b.put(matches[i][1],b.getOrDefault(matches[i][1],0)+1);
        }
       
        for(Integer mp1:a.keySet())
        {
            if(!b.containsKey(mp1))
            {
                am.add(mp1);
            }
        }

        Collections.sort(am);
        al.add(am);

        //am.clear();
        //System.out.print(am);

        for(Integer mp2:b.keySet())
        {
            if(b.get(mp2)==1) 
            {
                bm.add(mp2);
            }
        }
       
        Collections.sort(bm);
        al.add(bm);

        return al;

    }
}
