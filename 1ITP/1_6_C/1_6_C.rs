use std::io;

fn main() {
    let mut buildngs = vec![vec![vec![0; 10]; 3]; 4];
    let n = input_number();
    let n = n[0];
    for _ in 0..n {
        let input = input_number();
        let b = input[0] as usize;
        let f = input[1] as usize;
        let r = input[2] as usize;
        let v = input[3] as usize;
       
        buildngs[b-1][f-1][r-1] += v;
    }
    for (index, build) in buildngs.iter().enumerate() {
        for floor in build {
            for house in floor {
                print!(" {}", house);
            }
            println!("");
        }
        if index != 3 {
            println!("####################");
        }
    }
}

#[allow(dead_code)]
fn input_number() -> Vec<i64> {
    let mut input = String::new();
    io::stdin().read_line(&mut input) .expect("Failed to read line");
    let vec: Vec<i64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0))
        .collect();
    vec
}

#[allow(dead_code)]
fn input() -> (char, usize) {
    let mut s = String::new();
    io::stdin().read_line(&mut s).expect("");
    let mut iter = s.trim().split_whitespace();
    let c:char = iter.next().unwrap().chars().nth(0).unwrap();
    let n:usize = iter.next().unwrap().parse().unwrap();
    (c, n)
}
